#include <iostream>
using namespace std;

int main()
{

       int vowel, consonant, space, digit;
       vowel = 0;
       consonant = 0;
       space = 0;

       char sentence[] = "hello world";
       digit = sizeof(sentence) - 1;

       for (int i = 0; i < digit; i++)
       {
              if (sentence[i] == 'i' || sentence[i] == 'I' || sentence[i] == 'a' || sentence[i] == 'A' || sentence[i] == 'e' || sentence[i] == 'E' || sentence[i] == 'o' || sentence[i] == 'O' || sentence[i] == 'u' || sentence[i] == 'U')
              {
                     vowel++;
              }

              else if (sentence[i] == 32)
              {
                     space++;
              }
              else
              {
                     consonant++;
              }
       }
       cout << "There are " << vowel << " vowel " << consonant << " consonant " << space << " space "
            << "in this sentence";
}