//FCI - Programming 1 - 2018 - Assignment 2
//Program name: Buoyancy
//Last Modification Date: 1/3/2018
//Author and ID and group: Kareem Magdy - 20170197 - Group 8
//Teaching Assistants: Mohamed Atta & Ibrahim Zidan
//Purpose: To determine whether a sphere will float or sink in water

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float w , r , V , F , x;
    float y = 62.4;
    int choice;
    bool isFinished = false;

    cout << endl << "\t\t\t\t\t\t\tWelcome";

    while (isFinished == false){
        cout << endl << "To continue: press 1" << endl;
        cout << "To exit: press 2" << endl;
        cout << "Your choice is: ";
        cin >> choice;

        if (choice == 1){
            cout << endl << "Enter the weight of the sphere in pounds: ";
            cin >> w;
            cout << "Enter the radius of the sphere in feet: ";
            cin >> r;
            x = pow(r,3);
            V = (4/3) * (22/7) * x;
            F = V * y;
            if (F >= w)
                cout << "The sphere will float in water" << endl;
            else
                cout << "The sphere will sink in water" << endl;
        }
        else if (choice == 2)
            isFinished = true;
    }
    return 0;
}
