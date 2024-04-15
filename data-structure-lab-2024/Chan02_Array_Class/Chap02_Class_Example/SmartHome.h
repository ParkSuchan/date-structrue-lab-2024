#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;

// SmartHome
class SmartHome {
private:
    string owner; // 문자열
    int temperature;    // 정수형
    int humidity;
    bool security;  
public:

    //생성자
    SmartHome(string owner, int temperature, int humidity, bool security) {
        this->owner = owner;
        this->temperature = temperature;
        this->humidity = humidity;
        this->security = security;
    }

    void setTemperature(int temperature) {
        this->temperature = temperature;
    }
    void setHumidity(int humidity) {
        this->humidity = humidity;
    }
    void setSecurity(bool security) {
        this->security = security;
    }
    string getOwner() {
        return this->owner;
    }
    int getTemperature() {
        return this->temperature;
    }
    int getHumidity() {
        return this->humidity;
    }
    bool getSecurity() {
        return this->security;
    }
    void printStatus() {
        cout << ": " << this->owner << endl;
        cout << "온도: " << this->temperature << "도" << endl;
        cout << "습도: " << this->humidity << "%" << endl;
        if (this->security) {
            cout << " security on" << endl;
        }
        else {
            cout << "security off" << endl;
        }
    }
};