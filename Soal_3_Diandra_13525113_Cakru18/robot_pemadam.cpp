#include <iostream>
#include <string>

using namespace std;

class RobotPemadam {
private:
    int jarak;
    string status;

public:
    void inputSensor(int j) {
        jarak = j;
    }

    void prosesLogika() {
        if (jarak > 20) {
            status = "Maju Mencari Api";
        }
        else if (jarak <= 20 && jarak > 5) {
            status = "UDAH DEKET NIH BRAY";
        }
        else {
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }

    void cetakStatus() {
        cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]" << endl;
    }

};

int main() {
    RobotPemadam robot;
    int inputUser;

    cout << "=== Simulasi Robot Pemadan Api" << endl;
    cout << "Masukkan angka 67 untuk menghentikan program." << endl;

    while (true) {
        cout << "\nMasukkan input sensor jarak: ";
        cin >> inputUser;

        if (inputUser == 67) {
            cout << "Program dihentikan, SSampai jumpa!" << endl;
            break;
        }

        robot.inputSensor(inputUser);
        robot.prosesLogika();
        robot.cetakStatus();
    }

    return 0;
}