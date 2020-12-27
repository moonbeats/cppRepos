#include <iostream>
using namespace std;
void test01()
{
    char ch;
    int aCnt = 0;
    int eCnt = 0;
    int iCnt = 0;
    int oCnt = 0;
    int uCnt = 0;
    while(cin>>ch)
    {
        
        switch (ch){
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
            default:
                break;
        }
    }

    cout<<"Number of vowel a:"<<aCnt<<endl;
    cout<<"Number of vowel e:"<<eCnt<<endl;
    cout<<"Number of vowel i:"<<iCnt<<endl;
    cout<<"Number of vowel o:"<<oCnt<<endl;
    cout<<"Number of vowel u:"<<uCnt<<endl;

}
int main() {
    test01();
    return 0;
}
