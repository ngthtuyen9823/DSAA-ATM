// thanh tuyen
// dev c
// ---------include thu vien -------------
// Node User
// Node Rut Tien
// Node Chuyen Tien
struct NodeUser {
    NodeUser *next;
    user us;
};

struct RutTien
{
    string thoiGian;
    int soTienGiaoDich;
};

struct ChuyenTien
{
    user sr;
    user dest;
    string thoiGian;
    int soTienGiaoDich;
};



struct user
{
    string id; // duy nhat
    string PIN;    
    string hoten;
    int sodu; 
    string sdt; // duy nhat
    bool isActive = true; // tai khoan con hoat dong hay ko.   
    ListRutTien;// linked list
    ListChuyenTien; // linked list
};


struct NodeLishSu
{
    NodeLishSu *next;
    LichSu ls;
};




struct listLichSuGiaoDich 
{
    Node *head;
    Node *tail;
};


struct listUser {
    Node *head;
    Node *tail;
}

int main() {

}

void docFile(nguon.txt, candoc);
void ghiFile(canghi, nguon.txt);

bool xacNhanDangNhap(string id, string PIN)
{
    //false -> lam lai
    //true -> menu();
}


void menu(user currentUser) {
    // print ra thong tin user
    void xemThongTin(user currentUser);
    

    void rutTien(user currentUser) {
        // hoi rut bao nhieu? -> option
        int soTienGiaoDich;
        cin >> soTienGiaoDich;
        if(soTienGiaoDich > us.sodu) {
            cout << "So du khong du!"; 
            menu(currentUser); 
            // neu so tien lon thi cho ra menu
        }
        else {
            NodeLishSu *newLichSu = createNodeLichSu(lichSu); // xu ly ko co nguoi den
            currentUser.sodu -= soTienGiaoDich;
            currentUser.lichSuGiaoDich.addTail(newLichSu);
        }

    }
    void chuyenTien(user sr, user dest) {

    }
    void xemLichSuGiaoDich(user currentUser);
    void doiMaPIN(user currentUser);
}
//hello? what your name

