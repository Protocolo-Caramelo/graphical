#if !defined(COMPILATION_DEVQUOTE) && !defined(COMPILATION_TOOLCHAIN_WINDOWS_DEVQUOTE)

int main(int argc, char*argv[])
{
    printf("Hello Wolrd!\n");
    return 0;
}

#elif defined(COMPILATION_DEVQUOTE) || defined(COMPILATION_TOOLCHAIN_WINDOWS_DEVQUOTE)
#include<graphical.h>

int main(int argc, char*argv[])
{
    /*
     * Please, run one test per program...
     */
    // 
    // Test SDL
    //
    // SimpleWindow();

    //
    // Text TextFA struct
    //
    // TextCache_Test("./assets/fonts/Ubuntu/Ubuntu-Regular.ttf", 50);

    //
    // Test Text struct
    //
    /*
    Text_Test1(
        "./assets/fonts/Ubuntu/Ubuntu-Regular.ttf",
        50,
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit. In mollis faucibus porttitor. Mauris tempor ut lorem ac laoreet. Quisque facilisis aliquet mauris a blandit. Sed magna ante, faucibus sit amet purus ac, eleifend posuere nunc.\nDuis id elit vulputate, sollicitudin odio nec, volutpat massa. Praesent auctor tincidunt massa, vitae interdum felis euismod sed. Vivamus ultrices, odio ac ullamcorper tincidunt, est urna iaculis lorem, a venenatis nunc magna ac quam. Donec nunc turpis, bibendum a lobortis at, auctor vitae augue."
        "#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~¡¢£¤¥¦§¨©ª«¬®¯°±²³´µ¶·¸¹º»¼½¾¿ÀÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞßàáâãäåæçèéêëìíîïðñòóôõö÷øùúûüýþÿ"
        );
    // */
    /*
    Text_Test2(
        "./assets/fonts/Ubuntu/Ubuntu-Regular.ttf",
        50,
        // "Lorem ipsum dolor sit amet, consectetur adipiscing elit. In mollis faucibus porttitor. Mauris tempor ut lorem ac laoreet."
        "#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~¡¢£¤¥¦§¨©ª«¬®¯°±²³´µ¶·¸¹º»¼½¾¿ÀÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞßàáâãäåæçèéêëìíîïðñòóôõö÷øùúûüýþÿ"
        // "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        // "Protocolo-Caramelo"
        // "Lorem ipsum dolor sit amet, consectetur adipiscing elit. In mollis faucibus porttitor. Mauris tempor ut lorem ac laoreet. Quisque facilisis aliquet mauris a blandit. Sed magna ante, faucibus sit amet purus ac, eleifend posuere nunc.\nDuis id elit vulputate, sollicitudin odio nec, volutpat massa. Praesent auctor tincidunt massa, vitae interdum felis euismod sed. Vivamus ultrices, odio ac ullamcorper tincidunt, est urna iaculis lorem, a venenatis nunc magna ac quam. Donec nunc turpis, bibendum a lobortis at, auctor vitae augue."
    );
    // */
    /*
    Text_Test3(
        "./assets/fonts/Ubuntu/Ubuntu-Regular.ttf",
        50,
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit. In mollis faucibus porttitor. Mauris tempor ut lorem ac laoreet. Quisque facilisis aliquet mauris a blandit. Sed magna ante, faucibus sit amet purus ac, eleifend posuere nunc.\nDuis id elit vulputate, sollicitudin odio nec, volutpat massa. Praesent auctor tincidunt massa, vitae interdum felis euismod sed. Vivamus ultrices, odio ac ullamcorper tincidunt, est urna iaculis lorem, a venenatis nunc magna ac quam. Donec nunc turpis, bibendum a lobortis at, auctor vitae augue."
    );
    // */
    /*
    Text_Test4(
        "./assets/fonts/Ubuntu/Ubuntu-Regular.ttf",
        90,
        "Click Here!"
    );
    // */

    return 0;
}

#endif
