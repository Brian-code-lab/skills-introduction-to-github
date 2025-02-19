#include <iostream>
using namespace std;

float convert(float cm);

struct Measurement
{
    float distance;
    float answer;
};
int main()
{
    Measurement meas;
    cout<<"Enter distance in cm: ";
    cin>>meas.distance;

    meas.answer = convert(meas.distance);

    cout<<meas.distance<<"cm = "<<meas.answer<<"meters";

    return 0;
}
float convert(float cm)
{
    float m = cm/100.0;
    return m;
}
