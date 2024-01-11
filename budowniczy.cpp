#include <iostream>
#include <string>

// Product class
class Room
{
public:
    void setTime(const int time)
    {
        this->time = time;
    }
    void setName(const std::string& name)
    {
        this->name = name;
    }
    void setPrivate(const bool isPrivate)
    {
        this->isPrivate = isPrivate;
    }
    void display()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Time per player: " << time << std::endl;
        std::cout << "Is private?: " << isPrivate << std::endl;
        std::cout << "Current players: " << players[0] << std::endl;
    }

private:
    int time;
    std::string name;
    bool isPrivate;
    std::string players[2];
};

// Builder interface
class RoomBuilder
{
public:
    virtual void setName() = 0;
    virtual void setPrivate() = 0;
    virtual void setTime() = 0;
    virtual Room getResult() = 0;
};

// Concrete Builder
class QuickMatchRoomBuilder : public RoomBuilder
{
public:
    QuickMatchRoomBuilder()
    {
        room = Room();
    }
    void setName() override
    {
        room.setName("Quick match #2852");
    }
    void setPrivate() override
    {
        room.setPrivate(false);
    }
    void setTime() override
    {
        room.setTime(180); // 180s - 3 min
    }
    Room getResult() override
    {
        return room;
    }

private:
    Room room;
};

// Concrete Builder
class ClassicMatchRoomBuilder : public RoomBuilder
{
public:
    ClassicMatchRoomBuilder()
    {
        room = Room();
    }
    void setName() override
    {
        room.setName("Classic match #6325");
    }
    void setPrivate() override
    {
        room.setPrivate(true);
    }
    void setTime() override
    {
        room.setTime(3600); // 1h
    }
    Room getResult() override
    {
        return room;
    }

private:
    Room room;
};
// Director
class RoomAssembler
{
public:
    Room createRoom(RoomBuilder& builder)
    {
        builder.setName();
        builder.setPrivate();
        builder.setTime();
        return builder.getResult();
    }
};
int main()
{
    QuickMatchRoomBuilder qmBuilder;
    ClassicMatchRoomBuilder cmBuilder;
    RoomAssembler assembler;

    Room room1 = assembler.createRoom(qmBuilder);
    std::cout << "Room Configuration: " << std::endl;
    room1.display();

    std::cout << std::endl
        << std::endl;

    Room room2 = assembler.createRoom(cmBuilder);
    std::cout << "Room Configuration: " << std::endl;
    room2.display();

    return 0;
}