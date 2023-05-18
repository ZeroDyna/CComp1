#pragma once
class CreateandDestroy {
public:
    CreateandDestroy(int , std::string);
    ~CreateandDestroy();
private:
    int objectID;
    std::string message;
};