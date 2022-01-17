#include <windows.h>
int main()
{
   ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ",
                NULL, NULL, SW_SHOWNORMAL);
    return 0;
}