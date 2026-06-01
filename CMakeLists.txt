cmake_minimum_required(VERSION 3.14)
project(c-dsa C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# IntelliSense用にコンパイルコマンドを出力する
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# FetchContentモジュールを読み込む（外部ライブラリの自動取得に使用）
include(FetchContent)

# GoogleTestをGitHubから取得する設定
# バージョンを変更する場合はURLのタグ（v1.14.0）を変更する
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

# GoogleTestをビルド対象に追加する
FetchContent_MakeAvailable(googletest)

# CMakeのテスト機能を有効化（add_testが使えるようになる）
enable_testing()

# srcディレクトリのビルド設定を読み込む
add_subdirectory(src)

# testディレクトリのビルド設定を読み込む
add_subdirectory(test)