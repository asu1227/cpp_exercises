/*编写一个程序，它每次读取一个单词，直到用户只输入q。然
后，该程序指出有多少个单词以元音打头，有多少个单词以辅音打头，
还有多少个单词不属于这两类。为此，方法之一是，使用isalpha( )来区
分以字母和其他字符打头的单词，然后对于通过了isalpha( )测试的单
词，使用if或switch语句来确定哪些以元音打头。该程序的运行情况如
下：
Enter words (q to quit):
The 12 awesome oxen ambled
quitly across 15 meters of lawn. q
5 words beginning with vowels
4 words beginning with consonants
2 others*/
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()//测试用例：如题所示
{
    cout << "Enter words (q to quit):\n";
    string word;
    int vowel,consonant,other = 0;
    //使用6.1的代码无法定位首字母 问题：如何定位首字母。解决办法：使用string类
    cin >> word;
    while(word != "q")
    {
        if (isalpha(word[0]))//首字母是字符的情况
        {
            switch (word[0])
            {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': vowel++;
                      break;
        
            default : consonant++;//首字母属于字符，但是不是元音字母
            }
        }
        else//首字母不是字母的情况
        {
            other++;
        }
        cin >> word;
    }//while循环结束
    cout << vowel << " words beginning with vowels\n";
    cout << consonant << " words beginning with consonants\n";
    cout << other << " others\n";

    return 0;
    
}