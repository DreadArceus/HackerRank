#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    string time;
    unordered_map <int, string>convert;
    convert[0] = "o' clock";
    convert[1] = "one";
    convert[2] = "two";
    convert[3] = "three";
    convert[4] = "four";
    convert[5] = "five";
    convert[6] = "six";
    convert[7] = "seven";
    convert[8] = "eight";
    convert[9] = "nine";
    convert[10] = "ten";
    convert[11] = "eleven";
    convert[12] = "twelve";
    convert[13] = "thirteen";
    convert[14] = "fourteen";
    convert[16] = "sixteen";
    convert[17] = "seventeen";
    convert[18] = "eighteen";
    convert[19] = "nineteen";
    convert[20] = "twenty";
    if(m == 0)
    {
        time = convert[h] + " " + convert[m];
    }
    else if (m == 1)
    {
        time = convert[m] + " minute " + "past " + convert[h];
    }
    else if(m == 15)
    {
        time = "quarter past " + convert[h];
    }
    else if(m < 21)
    {
        time = convert[m] + " minutes " + "past " + convert[h];
    }
    else if(m < 30)
    {
        time = "twenty " + convert[m % 10] + " minutes " + "past " + convert[h]; 
    }
    else if(m == 30)
    {
        time = "half past " + convert[h];
    }
    else if(m == 45)
    {
        time = "quarter to ";
        if(h != 12)
        {
            time += convert[h+1];
        }
        else
        {
            time += convert[1];
        }
    }
    else if (m < 40)
    {
        time = "twenty " + convert[(60 - m)%10]+ " minutes " + "to ";
        if(h != 12)
        {
            time += convert[h+1];
        }
        else
        {
            time += convert[1];
        }
    }
    else if(m == 59)
    {
        time = convert[60 - m] + " minute " + "to ";
        if(h != 12)
        {
            time += convert[h+1];
        }
        else
        {
            time += convert[1];
        }
    }
    else 
    {
        time = convert[60 - m] + " minutes " + "to ";
        if(h != 12)
        {
            time += convert[h+1];
        }
        else
        {
            time += convert[1];
        }
    }
    return time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
