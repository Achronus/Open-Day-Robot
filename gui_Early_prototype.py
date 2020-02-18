from tkinter import *
from tkinter.ttk import *
import tkinter as tk



class Page(tk.Frame):
    def __init__(self, *args, **kwargs):
        tk.Frame.__init__(self, *args, **kwargs)
    def show(self):
        self.lift()

class index(Page):
  def __init__(self, *args, **kwargs):
    page.__init__(self, *args, **kwargs)



class University(Page):
   def __init__(self, *args, **kwargs):
       Page.__init__(self, *args, **kwargs)
       label = tk.Label(self, text="Uni page")
       label.pack(side="top", fill="both", expand=True)

class CourseDetails(Page):
   def __init__(self, *args, **kwargs):
       Page.__init__(self, *args, **kwargs)
       label = tk.Label(self, text="Course page ")
       label.pack(side="top", fill="both", expand=True)

class Accommodation(Page):
   def __init__(self, *args, **kwargs):
       Page.__init__(self, *args, **kwargs)
       label = tk.Label(self, text="accomadtion page")
       label.pack(side="top", fill="both", expand=True)

class Other(Page):
   def __init__(self, *args, **kwargs):
       Page.__init__(self, *args, **kwargs)
       label = tk.Label(self, text="other page ")
       label.pack(side="top", fill="both", expand=True)

class MainView(tk.Frame):
    def __init__(self, *args, **kwargs):
        tk.Frame.__init__(self, *args, **kwargs)
        university = University(self)
        courseDetails = CourseDetails(self)
        accommodation = Accommodation(self)
        other = Other(self)


       # back = Button(main, text ="<--", command = backClick)  # returns back to the previouse screen
       # back.pack(side = LEFT) ###### youre doing this -----------------------------------------------------------------------------------------------------
        header = tk.Frame(self)
        header.pack(side ="top")
        canvas = Canvas(header, width = 300, height = 300)
        canvas.pack()
        img = PhotoImage(file = "lincolnUniLogo.png")
        canvas.create_image(20,20, anchor = NW, image=img)
        lbl = Label(header, text ="University of lincoln", font=("Arial Bold", 50))
        lbl.configure(background="blue")
        lbl.pack(side="left")

        buttonframe = tk.Frame(self)
        container = tk.Frame(self)
        buttonframe.pack(fill="x", expand=False)
        container.pack(fill="both", expand=True)

        university.place(in_=container, x=0, y=0, relwidth=1, relheight=1)
        courseDetails.place(in_=container, x=0, y=0, relwidth=1, relheight=1)
        accommodation.place(in_=container, x=0, y=0, relwidth=1, relheight=1)
        other.place(in_=container, x=0, y=0, relwidth=1, relheight=1)

        b1 = tk.Button(buttonframe, text="University", command=university.lift)
        b2 = tk.Button(buttonframe, text="Course Details", command=courseDetails.lift)
        b3 = tk.Button(buttonframe, text="Accommodation", command=accommodation.lift)
        b4 = tk.Button(buttonframe, text="Other", command=other.lift)


        b1.pack(side="left", fill="both", expand=True)
        b2.pack(side="left", fill="both", expand=True)
        b3.pack(side="left", fill="both", expand=True)
        b4.pack(side="left", fill="both", expand=True)

        university.show()

if __name__ == "__main__":
    root = tk.Tk()
    main = MainView(root)
    root.title("amazing open day robot")
    main.pack(side="top", fill="both", expand=True)
    root.wm_geometry("1920x1080")
    root.mainloop()

