#include <iostream>
using namespace std;
    struct details
    {
        char roll_no[5];
        char phone[14];
        char email_id[30];
    };
    struct student
    {
        char name[10];
        struct details info;
    };

    int main()
    {
        struct student st;

        cout<<"Enter student details?:\n";
        cin>>st.name>>st.info.roll_no >> st.info.phone >> st.info.email_id;

        cout<<"\nPrinting the student details...\n";
        cout<< st.name <<endl << st.info.roll_no <<endl << st.info.phone <<endl << st.info.email_id;
    }
      
