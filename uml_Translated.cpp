#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Album {
private:
    int id;
    string title;
    string remarks;

public:
    Album(int id, string title) : id(id), title(title), remarks("") {}
    //use of initilization list as taken in cs lab
   

    int getId() const {
        return id;
    }

    string getTitle() const {
        return title;
    }

    string getRemarks() const {
        return remarks;
    }

    void setRemarks(string remarks) {
        this->remarks = remarks;
    }
};

class Photo {
private:
    int id;
    string title;
    string remarks;
    string type;
    string privacy;

public:
    Photo(int id, string title, string type, string privacy)
        : id(id), title(title), remarks(""), type(type), privacy(privacy) {}

    

    int getId() const {
        return id;
    }

    string getTitle() const {
        return title;
    }

    string getRemarks() const {
        return remarks;
    }

    void setRemarks(string remarks) {
        this->remarks = remarks;
    }

    string getType() const {
        return type;
    }

    string getPrivacy() const {
        return privacy;
    }

    void setPrivacy(string privacy) {
        this->privacy = privacy;
    }
};

class Location {
private:
    int id;
    string name;
    string remarks;

public:
    Location(int id, string name) : id(id), name(name), remarks("") {}


    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    string getRemarks() const {
        return remarks;
    }

    void setRemarks(string remarks) {
        this->remarks = remarks;
    }
};

class Member {
private:
    int id;
    string name;
    string address;
    string contact;

public:
    Member(int id, string name, string address, string contact)
        : id(id), name(name), address(address), contact(contact) {}

     

    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

    string getContact() const {
        return contact;
    }
};

class Tag {
private:
    int id;
    string name;
    string remarks;

public:
    Tag(int id, string name) : id(id), name(name), remarks("") {}

    

    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    string getRemarks() const {
        return remarks;
    }

    void setRemarks(string remarks) {
        this->remarks = remarks;
    }
};
