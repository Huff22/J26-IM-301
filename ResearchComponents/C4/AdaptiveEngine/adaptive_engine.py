
from dataclasses import dataclass


@dataclass
class PatientResponse:
    baseline_hr: float
    current_hr: float
    avoidance: str
    current_level: int


def calculate_next_exposure(response):
    """
    Experimental adaptive exposure algorithm.
    Uses simulated data and illustrative thresholds.
    Not validated for clinical use.
    """

    hr_change = response.current_hr - response.baseline_hr

    if hr_change >= 25 or response.avoidance == "high":
        decision = "DECREASE"
        next_level = max(1, response.current_level - 1)

    elif hr_change < 10 and response.avoidance == "none":
        decision = "INCREASE"
        next_level = min(5, response.current_level + 1)

    else:
        decision = "MAINTAIN"
        next_level = response.current_level

    return decision, next_level


if __name__ == "__main__":
    print("C4 - Adaptive Cockroach Exposure Engine")
    print("-------------------------------------")
    print("Simulated patient response data")

    patient = PatientResponse(
        baseline_hr=75,
        current_hr=110,
        avoidance="high",
        current_level=3
    )

    decision, next_level = calculate_next_exposure(patient)

    print("Baseline Heart Rate:", patient.baseline_hr)
    print("Current Heart Rate:", patient.current_hr)
    print("Behavioural Avoidance:", patient.avoidance)
    print("Current Exposure Level:", patient.current_level)
    print("-------------------------------------")
    print("Adaptive Decision:", decision)
    print("Recommended Next Exposure Level:", next_level)

