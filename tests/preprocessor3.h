#define X123 12345678
#define Y123 X123
#define A123 Y123
#define B123 A123
#define C123 B123
integer :: x, y
! FIXME: temporary workaround for not working macro expansion in include files
integer, parameter :: C123 = 12345678