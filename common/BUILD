cc_library(
    name = "stats",
    srcs = ["stats.c"],
    hdrs = ["stats.h"],
)

cc_library(
    name = "file_test",
    srcs = ["file_test.cc"],
    hdrs = ["file_test.h"],
	data = ["test_data/input.txt"]
)

cc_test(
    name = "stats_test",
    srcs = ["stats_test.cc"],
    deps = [
        ":stats",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "file_test_test",
    srcs = ["file_test_test.cc"],
    deps = [
        ":file_test",
        "@googletest//:gtest_main",
    ],
)