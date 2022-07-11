
class Queue:

	def __init__(self, c):
		
		self.queue = []
		self.front = self.rear = 0
		self.capacity = c

	def queueEnqueue(self, data):

		if(self.capacity == self.rear):
			print("\nQueue is full")

		else:
			self.queue.append(data)
			self.rear += 1

	def queueDequeue(self):

		if(self.front == self.rear):
			print("Queue is empty")

		else:
			x = self.queue.pop(0)
			self.rear -= 1

	def queueDisplay(self):
		
		if(self.front == self.rear):
			print("\nQueue is Empty")

		for i in self.queue:
			print(i, "<--", end = '')
	
	
	def queueFront(self):
		
		if(self.front == self.rear):
			print("\nQueue is Empty")

		print("\nFront Element is:",
			self.queue[self.front])

if __name__=='__main__':

	q = Queue(4)

	q.queueDisplay()

	q.queueEnqueue(44)
	q.queueEnqueue(55)
	q.queueEnqueue(66)
	q.queueEnqueue(77)

	q.queueDisplay()

	q.queueEnqueue(66)

	q.queueDisplay()

	q.queueDequeue()
	q.queueDequeue()
	print("\n\nafter two node deletion we have \n")

	q.queueDisplay()

	q.queueFront()

