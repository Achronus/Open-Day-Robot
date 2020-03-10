import tkinter as tk
from PIL import ImageTk, Image   
from tkinter import *

root = Tk()
root.geometry("720x480")
top_frame = Frame(root, bg='#06224A', width=450, height=50, pady=3)
center = Frame(root, bg='white', width=50, height=40, padx=3, pady=3)

font=("Arial Bold", 50)

root.grid_rowconfigure(1, weight=1)
root.grid_columnconfigure(0, weight=1)



top_frame.grid(row=0, sticky="ew")
center.grid(row=1, sticky="nsew")

tk.Label(center,bg ='white',padx = 45, pady=10).grid(row=0,column=0)
tk.Button(center,text="University",anchor="center",height=2,width=15,bd=2,font=("Arial Bold", 20)).grid(row=1,column=1)
tk.Button(center,text="Course Details",anchor="center",height=2,width=15,bd=2,font=("Arial Bold", 20)).grid(row=1,column=2)
tk.Button(center,text="Accommodation",anchor="center",height=2,width=15,bd=2,font=("Arial Bold", 20)).grid(row=2,column=1)
tk.Button(center,text="Other",anchor="center",height=2,width=15,font=("Arial Bold", 20) ).grid(row=2,column=2)

tk.Label(top_frame, width=15).grid(row=0,column=0)
tk.Label(top_frame,bg = '#06224A', width=56).grid(row=0,column=1)
tk.Label(top_frame,text="open Day \n 11th Febuary 2020", relief=tk.FLAT, width=15,anchor="center", padx = 50, pady=50).grid(row=0,column=2)
 

tk.mainloop()