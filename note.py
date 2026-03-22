import tkinter as tk

window = tk.Tk()
window.title("누르시오.")
window.geometry("1260x960")

# 결과 표시할 라벨
result_label = tk.Label(window, text="고르시오", font=("Arial", 14))
second_label = tk.Lable(window, font=("Arial",14))
result_label.pack(pady=20)

# 버튼별 함수들
def button1_click():
    second_label = print(
        "ㅋ"
    )



# 버튼 3개 생성
button1 = tk.Button(window, text="버튼 1", command=button1_click, width=15)
button1.pack(pady=5)

window.mainloop()