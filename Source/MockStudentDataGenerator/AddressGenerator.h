#pragma once
class AddressGenerator {
private:
    string AddrNum[20] = { "1A","2A","68","78","391","729","1","552","333","59","78A","54B","3A","4A","5C","6D","7F","8D","91A","423" };
    string AddrStreet[12] = { "Pham Van Dong", "Quang Trung", "Tran Quoc Thao", "Tran Hung Dao", "Ly Thuong Kiet", "Le Thanh Ton", "Nguyen Van Cu","Nguyen Hue", "Phan Van Tri","Nguyen Anh Thu", "Hoang Sa","Truong Sa" };
    string AddrWard[20] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12","Tan Hung", "Tan Thoi Nhat", "Tan Son Nhi", "Thoi Tam", "Tan Dinh", "Binh Hung Hoa", "Quan Thanh", "Tan Hung Thuan" };
    string AddrDistrict[20] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "Hai Ba Trung", "Ba Dinh", "Phu Nhuan", "Binh Thanh", "Binh Chanh", "Hoc Mon", "Cu Chi" };
    string AddrCity[5] = { "Ho Chi Minh", "Ha Noi", "Da Nang", "Can Tho", "Phan Thiet" };
public:
    string next();
       
    
};