#include <iostream>
#include <map>
using namespace std;

//#define SWITCH
#define MAP

#ifdef MAP
map<string, float> g2fg = {{"A+", 4.5}, {"A0", 4.0},
                            {"B+", 3.5}, {"B0", 3.0},
                            {"C+", 2.5}, {"C0", 2.0},
                            {"D+", 1.5}, {"D0", 1.0},
                            {"F", 0.0}};
#endif            

int main()
{
    string s, g;
    float w, tot = 0, fg;
    float tw = 0;

    for (int i = 0; i < 20; i++)
    {
        cin >> s >> w >> g;

#ifdef MAP
        if(g == "P") continue;

        tw += w;
        tot += w * g2fg[g];
#endif

#ifdef SWITCH
        if(g[0] == 'P')
            continue;
        
        fg = 0;
        switch (g[0])
        {
        case 'A':
            fg += 4;
            break;
        case 'B':
            fg += 3;
            break;
        case 'C' :
            fg += 2;
            break;
        case 'D' :
            fg += 1;
        default:
            break;
        }

        if(g[0] != 'F' && g[1] == '+') fg += 0.5;

        tw += w;
        tot += (fg * w);
#endif

    }

    cout.precision(6);
    cout << fixed;
    cout << tot / tw;
}