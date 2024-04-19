#include "include.h"
struct student
    {
        u8 name[Max];
        u32 grade;
        u32 id;
        u16 age;
        u8 gender[Max];
        u8 password[Max];
        struct student *Next;
    };
     struct student* head=NULL;
void view_your_record()
{
    u32 Pass;
    printf("enter your password : ");
    scanf("%s",&Pass);
    struct student* ptr=head;
    while(ptr++)
    {
        if(pass==Pass)
        {
           printf("enter your new password : ");
           scanf("%s", &Pass);
        }
    }
    ptr->pass=Pass;
}
