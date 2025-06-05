#include <iostream>
#include <array>
#include <initializer_list>
#include <stdexcept>  // for std::length_error

template<typename T, size_t N>
class sensor {
    std::array<T, N> arr;

public:
    // Constructor from initializer list
    sensor(std::initializer_list<T> list) {
        if (list.size() > N) {
            throw std::length_error("too many arguments");
        }
        // Copy initializer_list elements into array
        size_t i = 0;
        for (const auto& val : list) {
            arr[i++] = val;
        }
        // If fewer elements, rest remain default-initialized (0 for float)
        for (; i < N; ++i) {
            arr[i] = T{};
        }
    }

    // Access elements by index
    T operator[](size_t idx) const {
        return arr[idx];
    }

    size_t size() const {
        return N;
    }

    // Provide access to underlying array for looping
    const std::array<T, N>& data() const {
        return arr;
    }
};

int main() {
    // Create 3 sensors with 5 readings each
    sensor<float, 5> sensor1{ 23.1f, 22.8f, 23.5f, 23.0f, 22.9f };
    sensor<float, 5> sensor2{ 21.0f, 20.8f, 21.2f, 21.1f, 20.9f };
    sensor<float, 5> sensor3{ 19.5f, 19.7f, 19.6f, 19.4f, 19.8f };

    // Store sensors in an array
    std::array<sensor<float, 5>, 3> sensors = { sensor1, sensor2, sensor3 };

    // Calibration factors for each sensor
    std::array<float, 3> calibrationFactors = { 0.5f, -0.3f, 1.2f };

    // Calculate and display average calibrated reading for each sensor
    for (size_t i = 0; i < sensors.size(); ++i) {
        const auto& sensorReadings = sensors[i];
        float calibration = calibrationFactors[i];

        float sum = 0.0f;
        for (size_t j = 0; j < sensorReadings.size(); ++j) {
            sum += (sensorReadings[j] + calibration);
        }

        float average = sum / sensorReadings.size();
        std::cout << "Sensor " << i + 1 << " average calibrated reading: " << average << "\n";
    }

    return 0;
}
