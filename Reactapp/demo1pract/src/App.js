import Todo from "./components/Todo.js";
function App() {
  return (
    <div>
      <h1>MY TODOS</h1>
      <Todo text="Hello" />
      <span></span>
      <Todo text="Hi" />
      <span></span>
      <Todo text="Welcome" />
    </div>
  );
}

export default App;
