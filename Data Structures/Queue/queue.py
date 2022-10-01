# Contributed by - Akhil Kumar Sharma <sharma.akhil484@gmail.com>

class queue:
	def __init__(self):
		self.front=-1
		self.rear=-1
		self.ls=[]

	def Enqueue(self,data):
		if self.front==-1:
			self.front=self.rear=0
			self.ls.append(data)
		else:
			self.rear=self.rear+1
			self.ls.append(data)

	def Dequeue(self):
		if(self.front==self.rear):
			self.front=self.rear=-1
		else:
			d=self.ls.pop(self.front)
			self.rear=self.rear-1
			

	def display(self):
		if self.front==-1:
			print("Queue is Empty")
		else:
			print("Queue:")
			for i in range(0,self.rear+1):
				
				print(self.ls[i])



if __name__ == '__main__':
	q_obj=queue()
	q_obj.__init__()
	q_obj.Enqueue(4)
	q_obj.Enqueue(6)
	q_obj.Enqueue(1)
	q_obj.Enqueue(7)
	q_obj.Enqueue(2)
	q_obj.display()
	q_obj.Dequeue()
	q_obj.display()
