Invocation failed [COMPILATION_ERROR]
Can't compile file:
program.cpp: In function 'int main()':
program.cpp:6:9: error: no match for 'operator<<' (operand types are 'std::istream {aka std::basic_istream<char>}' and 'int')
     cin <<n<<k<<q;
     ~~~~^~~
program.cpp:6:9: note: candidate: operator<<(int, int) <built-in>
program.cpp:6:9: note:   no known conversion for argument 1 from 'std::istream {aka std::basic_istream<char>}' to 'int'
In file included from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/bits/basic_string.h:48:0,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/string:52,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/bits/locale_classes.h:40,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/bits/ios_base.h:41,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ios:42,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:38,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/iostream:39,
                 from program.cpp:1:
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/string_view:559:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, std::basic_string_view<_CharT, _Traits>)
     operator<<(basic_ostream<_CharT, _Traits>& __os,
     ^~~~~~~~
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/string_view:559:5: note:   template argument deduction/substitution failed:
program.cpp:6:11: note:   'std::istream {aka std::basic_istream<char>}' is not derived from 'std::basic_ostream<_CharT, _Traits>'
     cin <<n<<k<<q;
           ^
In file included from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/string:52:0,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/bits/locale_classes.h:40,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/bits/ios_base.h:41,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ios:42,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:38,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/iostream:39,
                 from program.cpp:1:
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/bits/basic_string.h:6272:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator<<(basic_ostream<_CharT, _Traits>& __os,
     ^~~~~~~~
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/bits/basic_string.h:6272:5: note:   template argument deduction/substitution failed:
program.cpp:6:11: note:   'std::istream {aka std::basic_istream<char>}' is not derived from 'std::basic_ostream<_CharT, _Traits>'
     cin <<n<<k<<q;
           ^
In file included from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/bits/ios_base.h:46:0,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ios:42,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:38,
                 from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/iostream:39,
                 from program.cpp:1:
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/system_error:217:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const std::error_code&)
     operator<<(basic_ostream<_CharT, _Traits>& __os, const error_code& __e)
     ^~~~~~~~
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/system_error:217:5: note:   template argument deduction/substitution failed:
program.cpp:6:11: note:   'std::istream {aka std::basic_istream<char>}' is not derived from 'std::basic_ostream<_CharT, _Traits>'
     cin <<n<<k<<q;
           ^
In file included from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/iostream:39:0,
                 from program.cpp:1:
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:497:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, _CharT)
     operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
     ^~~~~~~~
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:497:5: note:   template argument deduction/substitution failed:
program.cpp:6:11: note:   'std::istream {aka std::basic_istream<char>}' is not derived from 'std::basic_ostream<_CharT, _Traits>'
     cin <<n<<k<<q;
           ^
In file included from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/iostream:39:0,
                 from program.cpp:1:
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:502:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, char)
     operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
     ^~~~~~~~
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:502:5: note:   template argument deduction/substitution failed:
program.cpp:6:11: note:   'std::istream {aka std::basic_istream<char>}' is not derived from 'std::basic_ostream<_CharT, _Traits>'
     cin <<n<<k<<q;
           ^
In file included from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/iostream:39:0,
                 from program.cpp:1:
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:508:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, char)
     operator<<(basic_ostream<char, _Traits>& __out, char __c)
     ^~~~~~~~
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:508:5: note:   template argument deduction/substitution failed:
program.cpp:6:11: note:   'std::istream {aka std::basic_istream<char>}' is not derived from 'std::basic_ostream<char, _Traits>'
     cin <<n<<k<<q;
           ^
In file included from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/iostream:39:0,
                 from program.cpp:1:
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:514:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, signed char)
     operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
     ^~~~~~~~
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:514:5: note:   template argument deduction/substitution failed:
program.cpp:6:11: note:   'std::istream {aka std::basic_istream<char>}' is not derived from 'std::basic_ostream<char, _Traits>'
     cin <<n<<k<<q;
           ^
In file included from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/iostream:39:0,
                 from program.cpp:1:
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:519:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, unsigned char)
     operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
     ^~~~~~~~
C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/ostream:519:5: note:   template argument deduction/substitution failed:
program.cpp:6:11: note:   'std::istream {aka std::basic_istream<char>}' is not derived from 'std::basic_ostream<char, _Traits>'
     cin <<n<<k<<q;
           ^
In file included from C:/Programs/mingw-w64-7/lib/gcc/i686-w64-mingw32/7.3.0/include/c++/iostream:39:0,
                 from program.cpp:1:
C:/Programs/mingw-w64-7/lib/gc
=====
Used: 0 ms, 0 KB


I found the exact same error on GitHub: https://github.com/HowardHinnant/date/issues/205
However, all the solutions provided in the page above do not work for me. 

I also tried changing my compiler to GCC, but it gives me the error:

>program.c:1:20: fatal error: iostream: No such file or directory
>compilation terminated.

