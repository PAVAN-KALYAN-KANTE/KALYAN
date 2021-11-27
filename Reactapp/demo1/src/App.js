import Todo from "./components/Todo";
function App() {
  return (
    <div>
      <h1> My Todos </h1>
      <Todo text="learn react" />
      <span>......</span>
      <Todo text="master React" />
      <Todo text="grandmaster React" />
    </div>
  );
}

export default App;
