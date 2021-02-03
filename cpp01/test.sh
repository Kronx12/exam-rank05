clang++ -Wall -Wextra -Werror -W -std=c++98 *.cpp -o start -fsanitize=address -g3
./start
rm start