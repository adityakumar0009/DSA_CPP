from tkinter import*
from tkinter import messagebox
root = Tk()
root.title("My first Gui")
root.wm_iconbitmap('adi img.ico')
root.geometry("580x600+100+50")

def student_data():
    messagebox.showinfo('Success','Fantastic!!!!!!!!')

Mymenu = Menu(root)
StudentMenu = Menu(Mymenu,tearoff=0)
StudentMenu.add_command(label='New File',command=student_data)
StudentMenu.add_command(label='New Window',command=student_data)

Mymenu.add_cascade(label='File',menu=StudentMenu)
# Mymenu.add_cascade(label='About')


root.config(menu=Mymenu)

root.mainloop()