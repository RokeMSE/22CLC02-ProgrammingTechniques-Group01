#include "../header.h"

template <typename Data_Type>
Data_Type* authenticateUSER (LIST<DLL, Data_Type*> list, USER* val) {
    DLL<Data_Type*>* cur = list.head;
    do {
        if ( cur->data->user->username == val->username && cur->data->user->password == val->password)
            return cur->data;
        cur = cur->next;
    } while ( cur != nullptr );
    return nullptr;
}

bool MenuResetPassword(LIST<DLL, STUDENT*> &L_stu, LIST<DLL, STAFF*> &L_sta)
{

    cout << "ERROR: User name or Password is not correct!" << endl;
    while (1)
    {
        cout << "1. Forgot/Change Password" << endl;
        cout << "2. Log in again" << endl;
        cout << "3. Exit" << endl;
        cout << "=> Your choice: ";
        int choice;
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1:
                    {
                        cout << "Input your User name to change Password: ";
                        string str,str1,str2;
                        cin >> str;

                        DLL<STUDENT*> *cur1 = L_stu.head;
                        DLL<STAFF*> *cur2 = L_sta.head;
                        while (cur1 != nullptr && cur1->data->user->username != str)
                            cur1 = cur1 -> next;
                        while (cur2 != nullptr && cur2->data->user->username != str)
                            cur2 = cur2 -> next;
                        if (cur1 == nullptr && cur2 == nullptr)
                        {
                            cout << "Your User name does not exist!" << endl;
                            break;
                        }

                        while (1)
                        {
                            cout << "New Password: ";
                            cin >> str1;
                            cout << "Confirm new Password: ";
                            cin >> str2;

                            if (str1 == str2)
                            {
                                if (str.find('@') >=0 && str.find('@') < str.length())
                                    cur2->data->user->password = str1;
                                else
                                    cur1->data->user->password = str1;
                                cout << "Change Password successfully!" << endl;
                                cout << endl;
                                break;
                            }
                            else
                                cout << "Can not confirm new Password. Try again!" << endl;
                        }
                        break;
                    }
            case 2:
                    return 1;
            case 3:
                    return 0;
            default:
                    {
                        cout << "Please enter a valid letter!" << endl;
                        break;
                    }
        }
    }
}