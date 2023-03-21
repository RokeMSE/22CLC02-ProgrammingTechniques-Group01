**Lưu ý**

Trong main file sẽ có một số list sau:\\
**ALLSTUDENTS** khai báo **DLL<STUDENT> ALLSTUDENTS**

**ALLSTAFF**

**ALLCLASS**

**ALLSCHOOLYEAR**

**ALLCOURSE**

...v.v

Khi **add** hay **import** một element:
chẳng hạn như import **students trong cùng một class** (*task 4*) thì các học sinh này sẽ được nối vào **ALLSTUDENTS trong main file** và đồng thời list **CLASS::DLL<STUDENT>* student** sẽ trỏ sinh viên đầu tiên của list và tail để cho biết sinh viên cuối cùng trong lớp

Để tránh hao phí bộ nhớ, các students chỉ lưu trên một vùng nhớ, còn các list cần lưu thì cứ trỏ đến vùng nhớ đó. Từ đây nảy sinh ra một số *lưu ý*:
        -- điều kiện dừng khi duyệt **CLASS::DLL<STUDENT>* student** trong nhiều trường hợp **KHÔNG PHẢI** là tail->next == nullptr.
        -- cùng một học sinh trong danh sách **ALLSTUDENTS** nhưng trong các view khác nhau thì chỉ số *No* là khác nhau (dự định khắc phục bằng cách cho CLASS, COURSE,... làm struct con của STUDENT và cho chỉ số *No* private)
        -- **remove** thành viên trong list COURSE, tức là thay đổi liên kết ở  liên kết của LIST 