# Contributed by - Akhil Kumar Sharma <sharma.akhil484@gmail.com>

class stack:
	
	
	def __init__(self):
		self.top=-1
		self.ls=[]
	def push(self,data):
		if self.top==-1:
			self.top=0
			self.ls.append(data)
		else:
			self.top=self.top+1
			self.ls.append(data)

	def pop_stack(self):
		val=self.ls.pop(self.top)
		self.top=self.top-1
	def display(self):
		if self.top==-1:
			print("Empty Stack")
		else:
			print("Stack:")
			for i in range(0,self.top+1):
				print(self.ls[i])

if __name__ == '__main__':
	stack_obj=stack()
	stack_obj.__init__()
	stack_obj.push(2)
	stack_obj.push(3)
	stack_obj.push(4)
	stack_obj.display()
	stack_obj.pop_stack()
	stack_obj.display()