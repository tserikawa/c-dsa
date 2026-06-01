# ライブラリのビルド設定
# -----------------------------------------------
# ✅ 新しい .c ファイルを追加するときは、add_libraryのリストに追加する
#
# 例：新しいファイル string/dynamic_array.c を追加する場合
#   add_library(
#       c-dsa-lib
#       string/c_string.c
#       string/dynamic_array.c   ← 追加
#   )
# -----------------------------------------------
add_library(
    c-dsa-lib
    string/c_string.c
)

# ヘッダファイルをルートからのパスでincludeできるようにする
target_include_directories(
    c-dsa-lib
    PUBLIC ${CMAKE_SOURCE_DIR}/include
)