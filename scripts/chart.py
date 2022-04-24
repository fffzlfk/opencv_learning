#!/usr/bin/python3

import matplotlib.pyplot as plt

from mplfonts import use_font

use_font("Noto Serif CJK SC")  # 指定中文字体

res_dict = {
    "var": [],
    "tenengrad": [],
    "roberts": [],
    "laplacian": [],
    "smd": [],
    "smd2": [],
    "max_min": [],
    "info_entropy": [],
}


method_name = {
    "var": "方差",
    "tenengrad": "Tenengrad",
    "roberts": "Roberts",
    "laplacian": "Laplacian",
    "smd": "灰度差分",
    "smd2": "灰度差分乘积",
    "max_min": "最大最小灰度梯度",
    "info_entropy": "信息熵",
}


def normalize(arr):
    return [(x - min(arr)) / (max(arr) - min(arr)) for x in arr]


def main():
    try:
        while True:
            strs = input().split()
            res_dict[strs[0]].append(float(strs[2]))
    except EOFError:
        pass

    for key in res_dict:
        res_dict[key] = normalize(res_dict[key])

    plt.style.use("fivethirtyeight")
    fig = plt.figure()
    ax = fig.add_subplot(111)
    ax.set_xlabel("Image number")
    ax.set_ylabel("Normalized value")

    colors = ["red", "green", "blue", "black", "yellow", "orange", "purple", "brown"]

    x = [str(i) for i in range(1, len(res_dict["var"]) + 1)]

    for i, key in enumerate(res_dict):
        ax.plot(
            x,
            res_dict[key],
            label=method_name[key],
            color=colors[i],
        )

    ax.legend()
    plt.show()


if __name__ == "__main__":
    main()
