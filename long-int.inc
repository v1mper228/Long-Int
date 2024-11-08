native GetInt(value[]);
native AddIntString(value[], value1[]);
native GetIntString(value[], val[], znak[]);
native IntOperators(value[], znak[], valued);
native AddInt(value[], val, string[]);
#define MAX_LEN 20
/*examples
    new player_money[MAX_LEN];

    AddInt(player_money, 2000, player_money); // will add 2000 to the variable

    new money = GetInt(player_money); // will return 2000

    GetInt - 
    if the number is greater than 2147483647, it will return 2147483647, if less, it will return the number

    AddIntString(player_money, "8000000000"); // // will add 8000000000 to the variable

    GetIntstring(player_money, "2000" ">"); -- returns 1, since the right number is greater than the left one

    IntOperators(player_money, "*", 2); multiplies the number by 2

    IntOperators(player_money, ":", 2); divide the number by 2
    
    The end! Enjoy your use


/*