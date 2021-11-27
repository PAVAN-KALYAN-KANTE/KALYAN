import Modal from "./Modal";
import Backdrop from "./backdrop";
import { useState } from "react";

function Todo(props) {
  const [show, Setshow] = useState(false);
  function showModal() {
    Setshow(true);
  }
  function hide() {
    Setshow(false);
  }
  return (
    <div>
      <div className="card">
        <h1>{props.text}</h1>
        <div className="actions">
          <button className="btn" onClick={() => showModal()}>
            Delete
          </button>
        </div>
        {show && <Modal onCancel={() => hide()} onConfirm={() => hide()} />}
        {show && <Backdrop onCancel={() => hide()} />}
      </div>
    </div>
  );
}
export default Todo;
