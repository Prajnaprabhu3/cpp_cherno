// Classes vs Structs
// one small difference with vissibility

// A Class is priviate by default
// A struct is priviate by default
// Struct is mainly used because of certain feautres

struct Player
{
    // by default thid is private
private:
    int x, y;
    int speed;

    void Move(Player &player, int xa, int ya)
    {
        x += xa * player.speed;
        y += ya * player.speed;
    }
};

struct V2
{
};

int main()
{
    // variables made from class name are object
    Player player;

    player.Move(1, 1);
}