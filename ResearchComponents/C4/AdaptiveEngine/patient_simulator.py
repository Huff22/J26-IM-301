
from adaptive_engine import PatientResponse, calculate_next_exposure

# Simulated responses for software testing only.
# These are not real patient measurements.

simulated_responses = [
    {"heart_rate": 78, "avoidance": "none"},
    {"heart_rate": 90, "avoidance": "moderate"},
    {"heart_rate": 110, "avoidance": "high"},
    {"heart_rate": 80, "avoidance": "none"},
    {"heart_rate": 76, "avoidance": "none"},
]

baseline_hr = 75
current_level = 2

print("C4 - Simulated Adaptive Exposure Session")
print("=" * 55)

for stage, data in enumerate(simulated_responses, start=1):

    response = PatientResponse(
        baseline_hr=baseline_hr,
        current_hr=data["heart_rate"],
        avoidance=data["avoidance"],
        current_level=current_level
    )

    decision, next_level = calculate_next_exposure(response)

    print(f"\nStage {stage}")
    print(f"Heart Rate: {response.current_hr} BPM")
    print(f"Avoidance: {response.avoidance}")
    print(f"Current Exposure Level: {current_level}")
    print(f"Adaptive Decision: {decision}")
    print(f"Next Exposure Level: {next_level}")

    current_level = next_level

print("\n" + "=" * 55)
print("Simulation completed successfully.")
