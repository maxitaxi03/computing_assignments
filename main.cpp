#include<iostream>
using namespace std;

class GreenMonkey {
    float weight;
    int age;
    string name;
    char gender;
    bool isAlive = true, isMutant = true;

public:
    GreenMonkey(char gen, float w, int a, string n);
    float getweight(){
        return weight;
    }
    int getage() {
        return age;
    }
    string getname() {
        return name;
    }
    char getgender() {
        return gender;
    }
    bool getliving() {
        return isAlive;
    }
    bool getmutant() {
        return isMutant;
    }

    void setweight(float w) {
        if (w < 1 || w > 999) {
            cerr << "You have entered invalid data." << endl;
        }
        else
            weight = w;
    }
    void setage(int a) {
        if (a < 1 && a > 999) {
            cerr << "You have entered invalid data." << endl;
        }
        else
            age = a;
    }
    void setname(string n) {
        name = n;
    }
    void setgender(char g) {
        if (g != 'm' || g != 'f') {
            cerr << "You have entered invalid information." << endl;
        }
        else
            gender = g;
    }
    void setliving(bool l) {
        if (l != 0 || l != 1)
            cerr << "You have entered invalid information." << endl;
        else
            isAlive = l;
    }
    void setmutant(bool m) {
        if (m != 0 || m != 1)
            cerr << "You have entered invalid information." << endl;
        else
            isMutant = m;
    }
    void printItems();
};
    GreenMonkey::GreenMonkey(char gen, float w, int a, string n) {
        gender = gen;
        weight = w;
        age = a;
        name = n;
        isAlive = true;
        isMutant = false;
}
    void GreenMonkey::printItems() {
        cout << "The attributes of the given monkey will be listed below: " << endl;
        cout << "The name of the monkey is: " << getname() << endl;
        cout << "The gender of the monkey is: " << getgender() << endl;
        cout << "The age of the monkey is: " << getage() << endl;
        cout << "The weight of the monkey is: " << getweight() << endl;
    }
int main(){

}