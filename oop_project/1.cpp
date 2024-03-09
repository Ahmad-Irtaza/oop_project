#include <iostream>
#include <string>
using namespace std;

class Zodiac {
    private:
        string name;
        string description;
    public:
        Zodiac() {}
        void setName(string n) { name = n; }
        void setDescription(string d) { description = d; }
        void generateZodiacData(int day, int month) {
            // Calculate zodiac based on the day and month
            // Set name and description variables
            if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
                setName("Aries");
                setDescription("Courageous, energetic, optimistic, and confident.");
            }
            else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
                setName("Taurus");
                setDescription("Patient, reliable, warmhearted, and loving.");
            }
            else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
                setName("Gemini");
                setDescription("Adaptable, outgoing, curious, and intelligent.");
            }
            else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
                setName("Cancer");
                setDescription("Emotional, loving, intuitive, and imaginative.");
            }
            else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
                setName("Leo");
                setDescription("Generous, warmhearted, creative, and enthusiastic.");
            }
            else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
                setName("Virgo");
                setDescription("Loyal, analytical, kind, and hardworking.");
            }
            else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
                setName("Libra");
                setDescription("Social, fair-minded, diplomatic, and gracious.");
            }
            else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
                setName("Scorpio");
                setDescription("Passionate, stubborn, resourceful, and brave.");
            }
            else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
                setName("Sagittarius");
                setDescription("Extroverted, optimistic, funny, and generous.");
            }
            else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
                setName("Capricorn");
                setDescription("Serious, independent, disciplined, and tenacious.");
            }
            else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
                setName("Aquarius");
                setDescription("Deep, imaginative, original, and uncompromising.");
            }
            else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
                setName("Pisces");
                setDescription("Affectionate, empathetic, wise, and artistic.");
            }
        }
        void displayPersonality() {
            cout << "Zodiac: " << name << endl;
            cout << "Personality: " << description << endl;
        }
};

class DateOfBirth {
private:
    int day;
    int month;
    int year;
    Zodiac zodiac;

public:
    DateOfBirth(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
        zodiac.generateZodiacData(day, month);
    }

    void setDay(int d) {
        day = d;
        zodiac.generateZodiacData(day, month);
    }

    void setMonth(int m) {
        month = m;
        zodiac.generateZodiacData(day, month);
    }

    void setYear(int y) {
        year = y;
    }

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

    Zodiac getZodiac() {
        return zodiac;
    }
};

class Person {
private:
    string name;
    DateOfBirth dateOfBirth;

public:
    Person(string n, int d, int m, int y) : dateOfBirth(d, m, y) {
        name = n;
    }

    void displayZodiacInfo() {
        cout << name << "'s zodiac information:" << endl;
        dateOfBirth.getZodiac().displayPersonality();
    }
};

int main() {
    Person person("John", 5, 4, 1990);
    person.displayZodiacInfo();
    return 0;
}
