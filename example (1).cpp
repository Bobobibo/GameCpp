#include <iostream>
// #include <bits/stdc++.h>

typedef  unsigned long long ull;

using namespace std;
void testVariables()
{
    int x;
    x = 10;
    unsigned int y = 10;
    int z = x + y;
    float f = 2.0;
    double d = 4.0;
    int a = (int)f;
    double b = 2 * y + 3 * x;
}

#include <cmath>


void testOperators()
{
    int x = 7 / 3; // x = 2
    int y = 7 % 3; // y = 1
    cout << x << " " << y  << endl;
    cout << sqrt( x ) << endl;
    cout << sin( x ) << endl;


    bool b;  // true = 1    false = 0
}

//   if (a ?  b)   >= <= > <  ==   !=  && || !   >>   <<
// / % * + - ()

// &  |  ^  !
//cout << x>0 ? x : -x;

void testLoop()
{
    int sum = 0;
    for( int i = 0; i < 10; ++i )
    {
        sum += i;
    }
    cout << sum << endl;
    int x;
    do
    {
      cout << "positive num=" << endl;
      cin >> x;
    }
    while ( x <= 0 );
    int d = 0;
    while( x > 0 )
    {
        d += x % 10;
        x /= 10;
    }
    cout << "count = " << d << endl;

    for( int i = 0; ; ++i )
    {
        if ( ( i % 2 ) == 0 )
            continue;
        if ( i > 5 )
            break;
        cout << i << " ";
    }
    cout << endl;
}

void f1();
int f2( int x, int y );


void testFunctions()
{
    f1();
    cout << f2( 1, 2 ) << endl;
}

void f1()
{
    cout << "f1" << endl;
}

int f2( int x, int y )
{
    return ( x + y ) / 2;
}

void setSquares( int a[], int n )
{
    for( int i = 0; i < n; ++i )
    {
       a[ i ] = ( i + 1 ) * ( i + 1 );
    }
}
void print( const int *a, int n )
{
    for( int i = 0; i < n; ++i )
    {
        cout << a[i] << " ";
    }
    cout << endl;
}


const int SIZE = 10;

void testArrays()
{
    int a[SIZE];
    int aaa [SIZE][SIZE][SIZE][SIZE][SIZE]; // 10^5
    setSquares( a, SIZE );
    print(a, sizeof(a)/sizeof(a[0]));
}

struct RobotHand
{
  long strenght;
  long len;

  void Kick() {
    cout << "You loose";
  }
};


struct Robot
{
    int n = 0;
    char name;
    RobotHand lefthand;
    RobotHand righthand;

    void touch()
    {
        lefthand.Kick();
        n++;
        cout << "You touched a robot " << n << " times!" << endl;
    }

    void sum(int a, int b)
    {
        cout << a + b << endl;
    }
};


void testStruct()
{
    Robot robot;
    robot.name = 'a';
    robot.touch();
    robot.sum(1, 2);
    cout << robot.n;
    robot.touch();

    robot.lefthand.Kick();

    Robot robot2;
    cout << robot2.righthand.len;

}
//С : http://www.freebsd.org/cgi/man.cgi
//С++ : http://cplusplus.com/reference  и http://cppreference.com если не помогло, то www.google.com

int main() {
  testOperators();
}

