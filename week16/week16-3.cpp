#include <stdio.h>
int a[4];
char s[4]="ABC";
char s2[4]={ 'A', 'B', 'C', '\0' };
int main ()
{
    for(int i=0; i<4; i++)
    {
        printf("�r���O:%c= �ȬO%d\n", s[i],s[i]);
        printf("�t�@�}�C:%C= �ȬO:5d\n", s2[i], s2[i]);
    }
    printf("�ϱ׽un���ȬO:%d\n", '\n');
    printf("�ϱ׽u0���ȬO:%d\n", '\0');
}
