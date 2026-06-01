# テスト用実行ファイルのビルド設定
# -----------------------------------------------
# ✅ テストファイルを追加するときは、add_executableのリストに追加する
#
# 例：新しいテストファイル string/DynamicArrayTest.cpp を追加する場合
#   add_executable(
#       c-dsa-tests
#       string/CStringTest.cpp
#       string/DynamicArrayTest.cpp   ← 追加
#   )
# -----------------------------------------------
add_executable(
    c-dsa-tests
    string/c_string_test.cpp
)

# ヘッダファイルをルートからのパスでincludeできるようにする
target_include_directories(
    c-dsa-tests
    PRIVATE ${CMAKE_SOURCE_DIR}/include
)

# リンクするライブラリの設定
# -----------------------------------------------
# ✅ 新しい外部ライブラリを追加するときは、このリストに追加する
#
# 例：
#   target_link_libraries(
#       c-dsa-tests
#       GTest::gtest_main
#       c-dsa-lib
#       SomeOtherLibrary   ← 追加
#   )
# -----------------------------------------------
target_link_libraries(
    c-dsa-tests
    GTest::gtest_main
    c-dsa-lib
)

# CTestにテストを登録する
# ctest コマンドや IDEのテストランナーから実行できるようになる
add_test(NAME CDSATests COMMAND c-dsa-tests)