#include "../header.h"

USER* authenticateUSER (LIST<DLL, USER> list, USER val) {
    DLL<USER>* cur = list.head;
    while ( cur ) {
        if ( cur->data.username == val.username )
            if ( cur->data.password == val.password )
                return &(cur->data);
            else {
                cout << "Sai mat khau, xin nhap lai.";
                return nullptr;
            }
        cur = cur->next;
    }
    cout << "khong co nguoi dung " << cur->data.username << "trong he thong" << endl;
    return nullptr;
}

void generateUSER () {
    // from keyboard
}