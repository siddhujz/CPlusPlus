#include <iostream>
using namespace std;

/*
print outout like the following for given height, here its 10
*********#
********##
*******###
******####
*****#####
****######
***#######
**########
*#########
##########
*/
int main()
{
    int height;
    cin>>height;
    int j = 1;
    do {
        for(int i = 0; i < height; i++) {
            if(i < height - j) {
                cout<<"*";
            } else {
                cout<<"#";
            }
        }
        cout<<endl;
        j++;
    } while (j <= height);
    return 0;
}
