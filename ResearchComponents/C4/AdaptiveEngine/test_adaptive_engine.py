
import unittest

from adaptive_engine import PatientResponse, calculate_next_exposure


class TestAdaptiveEngine(unittest.TestCase):

    def test_increase(self):
        response = PatientResponse(75, 78, "none", 2)
        self.assertEqual(
            calculate_next_exposure(response),
            ("INCREASE", 3)
        )

    def test_maintain(self):
        response = PatientResponse(75, 90, "moderate", 2)
        self.assertEqual(
            calculate_next_exposure(response),
            ("MAINTAIN", 2)
        )

    def test_decrease(self):
        response = PatientResponse(75, 110, "high", 3)
        self.assertEqual(
            calculate_next_exposure(response),
            ("DECREASE", 2)
        )

    def test_minimum_level(self):
        response = PatientResponse(75, 110, "high", 1)
        self.assertEqual(
            calculate_next_exposure(response),
            ("DECREASE", 1)
        )

    def test_maximum_level(self):
        response = PatientResponse(75, 78, "none", 5)
        self.assertEqual(
            calculate_next_exposure(response),
            ("INCREASE", 5)
        )

    def test_avoidance_priority(self):
        response = PatientResponse(75, 78, "high", 3)
        self.assertEqual(
            calculate_next_exposure(response),
            ("DECREASE", 2)
        )


if __name__ == "__main__":
    unittest.main(verbosity=2)
