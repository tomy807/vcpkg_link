# vcpkg install and usage

## 1) install

$ wget -O vcpkg.tar.gz <https://github.com/microsoft/vcpkg/archive/master.tar.gz>

## 2) search available library
$ vcpkg search [package]

## 3) install library
$ vcpkg install [package]

## 4) list of installed library
$ vcpkg list

## 5) use in vscode and error
CMAKE_TOOLCHAIN_FILE 을 이용해서 연결하려고 했는데
cmake 버전이 낮아서 cmake 버전을 올려줌

그래도 안돼서 수동으로 CMakeLists로 연결함
```
INCLUDE_DIRECTORIES(/home/tomy807/vcpkg/installed/x64-linux/include)

link_directories(/home/tomy807/vcpkg/installed/x64-linux/lib)
```
방법이 마음에 안들어서 고침

```
set(CMAKE_TOOLCHAIN_FILE "/home/tomy807/vcpkg/scripts/buildsystems/vcpkg.cmake")
```
근데 안됨
```
set(CMAKE_PREFIX_PATH "/home/tomy807/vcpkg/installed/x64-linux/share")
```
해결됨

## 6) easy to use libraries

직접 수동으로 라이브러리를 설치하고 관리하는 것보다 자동으로 빌드해주는것이 편함
