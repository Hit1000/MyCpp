#include <iostream>
using namespace std;
class TemperatureF;
class TemperatureC{

    public:
    double celsius;
        TemperatureC(){
            celsius = 0;
        }
        TemperatureC(double c){
            this->celsius=c;
        }
        TemperatureC(TemperatureF f);

        operator double(){
            return celsius;
        }
        

        TemperatureC operator+(double C){
            return TemperatureC(celsius+C);
        }
        TemperatureC operator-(double C){
            return TemperatureC(celsius-C);
        }
        void operator +=(double c){
            celsius+=c;
        }
        void operator -=(double c){
            celsius-=c;
        }
    };

class TemperatureF{

    public:
    double fahrenheit;
        TemperatureF(){
            fahrenheit = 0;
        }
        TemperatureF(double f){
            fahrenheit = f;
        }
        TemperatureF(TemperatureC c){
            fahrenheit = (c.celsius*9/5)+32;
        }
        operator double(){
            return fahrenheit;
        }
        // operator TemperatureC(){
        //     TemperatureC o((fahrenheit-32)*5/9);
        //     return o;
        // }

        TemperatureF operator+(double f){
            return TemperatureF(fahrenheit+f);
        }
        TemperatureF operator-(double f){
            return TemperatureF(fahrenheit-f);
        }
        void operator +=(double f){
            fahrenheit+=f;
        }
        void operator -=(double f){
            fahrenheit-=f;
        }
    };

TemperatureC :: TemperatureC(TemperatureF f){
            celsius = (f.fahrenheit-32.0)*5/9.0;
        }

int main()
{
    TemperatureC tempC(25.5);
    double celsius = tempC;
    cout << "Temperature in Celsius: " << celsius << " degrees Celsius" << endl;

    TemperatureF tempF = (TemperatureF)tempC;//tempf=tempc
    cout << "Temperature in Fahrenheit: " << (double)tempF << " degrees Fahrenheit" << endl;

    TemperatureF tempF2(78.9);
    double fahrenheit = tempF2;
    cout << "Temperature in Fahrenheit: " << fahrenheit << " degrees Fahrenheit" << endl;

    TemperatureC tempC2 = (TemperatureC)tempF2;//tempc=tempf
    cout << "Temperature in Celsius: " << (double)tempC2 << " degrees Celsius" << endl;

    TemperatureC tempC3(10.5);
    TemperatureC tempC4 = tempC3 + 5.0;
    cout << "Result of addition: " << (double)tempC4 << " degrees Celsius" << endl;

    tempC4 -= 2.0;
    cout << "Result of subtraction: " << (double)tempC4 << " degrees Celsius" << endl;

    TemperatureF tempF3(32.0);
    TemperatureF tempF4 = tempF3 - 10.0;
    cout << "Result of subtraction: " << (double)tempF4 << " degrees Fahrenheit" << endl;

    tempF4 += 5.0;
    cout << "Result of addition: " << (double)tempF4 << " degrees Fahrenheit" << endl;


    return 0;
}
