import { useState } from "react";
import Modal from "./Modal";
import Backdrop from "./Backdrop";
function Todo(props) {
  const [modalIsOpen, setModalOpen] = useState(false);
  function deletehandler() {
    setModalOpen(true);
  }
  function closehandler() {
    setModalOpen(false);
  }
  return (
    <div>
      <div className="card">
        <h2> {props.text} </h2>
        <div className="actions">
          <button className="btn" onClick={() => deletehandler()}>
            Delete
          </button>
        </div>
        {modalIsOpen && (
          <Modal
            onCancel={() => closehandler()}
            onConfirm={() => closehandler()}
          />
        )}
        {modalIsOpen && <Backdrop onCancel={() => closehandler()} />}
      </div>
    </div>
  );
}
export default Todo;
