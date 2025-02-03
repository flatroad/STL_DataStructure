#include "GameRoomUser.h"
#include <iostream>

static int MAX_USER_COUNT = 6;



GameRoomUser::GameRoomUser()
    : users(6, UserInfo{ "", -1, -1 })
{
}

GameRoomUser::~GameRoomUser()
{
}

bool GameRoomUser::AddUser(UserInfo& userInfo)
{
    if (this->IsFull())
    {
        std::cout << "유저가 가득찼어요" << std::endl;
        return (false);
    }

    if (this->IsEmpty())
    {
        this->masterUserName = userInfo.userName;
    }

    this->users.emplace_back(userInfo);

    return (true);
}

static bool IsExistUser(vector<UserInfo> &users, const char* userName)
{
    for (UserInfo user : users)
    {
        if (user.userName == userName)
        {
            return (true);
        }
    }
    return (false);
}

static int UsersCount(vector<UserInfo>& users)
{
    int count = 0;
    for (UserInfo user : users)
    {
        if (user.level > -1)
        {
            count = count + 1;
        }
    }
    return (count);
}

static int EmptySpace(vector<UserInfo>& users)
{
    for (int index = 0; index <= MAX_USER_COUNT; ++index)
    {
        if (users[index].level == -1)
        {
            return (index);
        }
    }
}

bool GameRoomUser::DeleteUser(const char* userName)
{
    if (this->users.empty() || !IsExistUser(this->users, userName))
    {
        return (false);
    }
    
    if (userName == this->masterUserName)
    {
        if (UsersCount(this->users) == 1)
        {
        
            this->masterUserName = "";
        }
        else 
        {
            for (vector<UserInfo>()
            this->users.erase   
        }
    }
}

bool GameRoomUser::IsEmpty()
{
    if (UsersCount(this->users) == 0)
    {
        return (true);
    }
    return (false);
}

bool GameRoomUser::IsFull()
{
    if (UsersCount(this->users) == MAX_USER_COUNT)
    {
        return (true);
    }
    return (false);
}

UserInfo& GameRoomUser::GetUserOfName(const char* userName)
{
    // TODO: 여기에 return 문을 삽입합니다.
}

UserInfo& GameRoomUser::GetMasterUser()
{
    // TODO: 여기에 return 문을 삽입합니다.
}

UserInfo& GameRoomUser::GetUserOfLastOrder()
{
    // TODO: 여기에 return 문을 삽입합니다.
}

bool GameRoomUser::BanUser(int orderNum)
{
    return false;
}

void GameRoomUser::Clear()
{
}
