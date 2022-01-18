#include <iostream>
#include<conio.h>
using namespace std;
class Node
{
public:
    int roll_number;
    string name;
    float marks, percent;
    Node *next_add;
};
class Linked_List
{
    public:
        Node *head=NULL;
        void Insert()
        {
            int r;
            string n;
            float m;
            cout<<"\n\n Enter Roll Number :";
            cin>>r;
            cout<<"\n\n Enter Name : ";
            cin>>n;
            cout<<"\n\n Enter Marks : ";
            cin>>m;
            Node *new_node=new Node();
            new_node->roll_number=r;
            new_node->name=n;
            new_node->marks=m;
            new_node->percent=m/100*100;
            new_node->next_add=NULL;
            if(head==NULL)
            {
                head=new_node;
            }
            else
            {
                Node *ptr=head;
                while(ptr->next_add==NULL)
                {
                   ptr=ptr->next_add;
                }
                ptr->next_add=new_node;

            }
            cout<<"\n\n\n New Node Inserted Successfully...";
        }
        void Search()
        {
            if(head==NULL)
            {
                cout<<"\n\n Linked list is Empty..."<<endl;
            }
            else
            {
                int r, found=0;
                cout<<"\n\n Enter Roll Numbers for searching : ";
                cin>>r;
                Node *ptr=head;
                while(ptr!=NULL)
                {
                    if(r==ptr->roll_number)
                    {
                        cout<<"\n\n Roll Number : "<<ptr->roll_number;
                        cout<<"\n\n Name : "<<ptr->name;
                        cout<<"\n\n Marks : "<<ptr->marks;
                        cout<<"\n\n Percentage : "<<ptr->percent;
                        found++;
                    }
                    ptr=ptr->next_add;
                }
                if(found=0)
                {
                    cout<<"\n\n Searched Roll Number "<<r<<" Can't found....!";
                }
            }
        }
        void count()
        {
            if(head==NULL)
            {
                cout<<"\n\n Linked List is Empty...";

            }
            else
            {
                int c=0;
                Node *ptr=head;
                while(ptr!=NULL)
                {
                    c++;
                    ptr=ptr->next_add;
                }
                cout<<"\n\n Total Number of Nodes : "<<c;
            }
        }
        void Update()
        {
            if(head==NULL)
            {
                cout<<"\n\n Linked list is Empty..."<<endl;
            }
            else
            {
                int r, found=0;
                cout<<"\n\n Enter Roll Numbers for Updation : ";
                cin>>r;
                Node *ptr=head;
                while(ptr!=NULL)
                {
                    if(r==ptr->roll_number)
                    {
                        cout<<"\n\n Enter New Roll Number : ";
                        cin>>ptr->roll_number;
                        cout<<"\n\n Enter Name : ";
                        cin>>ptr->name;
                        cout<<"\n\n Enter Marks :";
                        cin>>ptr->marks;
                        ptr->percent=ptr->marks/100*100;
                        cout<<"\n\n\n Record Updated Successfully...";
                        found++;
                    }
                    ptr=ptr->next_add;
                }
                if(found=0)
                {
                    cout<<"\n\n Searched Roll Number "<<r<<" Can't found....!";
                }
            }
        }
        void Del()
        {
            if(head==NULL)
            {
                cout<<"\n\n Linked list is Empty..."<<endl;
            }
            else
            {
                int r, found=0;
                cout<<"\n\n Enter Roll Numbers for Deletion : ";
                cin>>r;
                if(r==head->roll_number)
                {
                    Node *ptr=head;
                    head=head->next_add;
                    cout<<"\n\n Record Deleted Successfully...";
                    found++;
                    delete ptr;
                }
                else
                {
                    Node *pre=head;
                    Node *ptr=head->next_add;
                    while(ptr!=NULL)
                    {
                        if(r=ptr->roll_number)
                        {
                            pre->next_add=ptr->next_add;
                            cout<<"\n\n Record Deleted Successfully...";
                            found++;
                            delete ptr;
                            break;
                        }
                        pre=ptr;
                        ptr=ptr->next_add;
                    }
                    if(found==0)
                    {
                        cout<<"\n\n Delete Roll Number : "<<r<<"Can't be found...!"<<endl;
                    }
                }
        }
        void show()
        {
            if(head==NULL)
            {
                cout<<"\n\n Linked list is Empty..."<<endl;
            }
            else
            {
                Node *ptr=head;
                while(ptr!=NULL)
                {
                    cout<<"\n\n Roll Number : "<<ptr->roll_number;
                    cout<<"\n\n Name : "<<ptr->name;
                    cout<<"\n\n Marks : "<<ptr->marks;
                    cout<<"\n\n Percentage : "<<ptr->percent;
                    ptr=ptr->next_add;
                }
            }
        }
};
int main()
{
    Linked_List obj;
    p:
        system("cls");
    int choice;
    cout<<"\n\n 1) Insert Record: "<<endl;
    cout<<"\n\n 2) Search Record: "<<endl;
    cout<<"\n\n 3) Count Nodes: "<<endl;
    cout<<"\n\n 4) Update Record: "<<endl;
    cout<<"\n\n 5) Delete Record: "<<endl;
    cout<<"\n\n 6) Show All Record: "<<endl;
    cout<<"\n\n 7) Exit "<<endl;
    cout<<"\n\n\n Your Choice : ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
           system("cls");
           obj.Insert();
           break;

        }
    case 2:
        {
            system("cls");
            obj.Search();
            break;
        }
    case 3:
        {
            system("cls");
            obj.count();
            break;
        }
    case 4:
        {
            system("cls");
            obj.Update();
            break;
        }
    case 5:
        {
            system("cls");
            obj.Del()
            break;
        }
    case 6:
        {
            system("cls");
            obj.show();
            break;
        }
    case 7:
        {
            exit(0);
        }
    default:
        cout<<"\n\n\n Invalid Choice....Please Try Again"<<endl;


    }
    getch();
    goto p;
    return 0;
}
