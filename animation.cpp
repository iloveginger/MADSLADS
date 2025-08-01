void playerattackslash(){
     int frame = 0;
    while (frame < 3)
    {
        system("cls");

        if (frame == 0)
        {
            std::cout << R"(
            MAGE DEAD
      ⠀⠀P         /\
                          /  \
                         | () |
                       --:'x''x':--
                         :'_' :
                         _:"":\___
              ' '      ____.' :::     '._
             . *=====<<=)           \    :
              .  '      '-'-'\_      /'._.'
                               \====:_ ""
                              .'     \\
                             :       :
                            /   :    \
                           :   .      '.
               ,. _        snd :  : :      :
            '-'    ).          :__:-:__.;--'
          (        '  )        '-'   '-'

)";
        }
        else if (frame == 1)
        {
            std::cout << R"(
 ⠀⠀  MAGE DEAD
      ⠀⠀P         /\
                     
             . 
                              .'     \\
                             :       :
                            /   :    \
                           :   .      '.
               ,. _        snd :  : :      :
            '-'    ).          :__:-:__.;--'
          (        '  )        '-'   '-'

)";
        }
        else if (frame == 2)
        {
            std::cout << R"():
     
        }

        Sleep(900);
        frame++;
    }
    system("cls");
}